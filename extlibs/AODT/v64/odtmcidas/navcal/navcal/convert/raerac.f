C Copyright(c) 1997, Space Science and Engineering Center, UW-Madison
C Refer to "McIDAS Software Acquisition and Distribution Policies"
C in the file  mcidas/data/license.txt

      FUNCTION RAERAC(IYRDY,IHMS,RAE)
C *** $Id: raerac.f,v 1.6 1997/10/10 20:18:42 dglo Exp $ ***
C RAERAC PHILLI 0174 NAV: CONVERTS EARTH LON TO CELESTIAL LON
C $ FUNCTION RAERAC(IYRDY, IHMS, RAE)  (DAS)
C $ CONVERT CONVERT EARTH LONGITUDE TO CELESTIAL LONGITUDE. FN VAL IS
C $   IN REAL*4 DEGREES.
C $ IYRDY = (I) INPUT  YEAR AND JULIAN DAY (YYDDD)
C $ IHMS = (I) INPUT  TIME (HHMMSS)
C $ RAE = (R) INPUT  EARTH LONGITUDE (DEGREES)
C $$ RAERAC = NAVIGATION, CONVERT, LONGITUDE
C
C REF: ESCOBAL, "METHODS OF ORBIT DETERMINATION." WILEY & SONS, 1965
C GREENWICH SIDEREAL TIME := ANGLE BETWEEN PRIME MERID. & 0 DEG R.A.
C JULIAN DATE := # DAYS ELAPSED SINCE 12 NOON ON JAN 1, 4713 B.C.
C APPROXIMATE FORMULA FOR GREENWICH SIDEREAL TIME AT 0Z:
C G.S.T (DEG) = S(0) = 99.6909833 + 36000.7689*C + 0.00038708*C*C ,WHERE
C    C = TIME IN CENTURIES = (J.D. - 2415020.0) / 36525
C FOR G.S.T. AT OTHER TIMES OF (SAME) DAY, USE:
C G.S.T AT TIME T = S(T) = S(0) + (T * DS/DT)
C DS/DT = 1 + (1 / 365.24219879) = 1.00273790927 REVOLUTIONS/DAY
C       = 0.250684477 DEGREES/MINUTE
C
C FROM TABLE, J.D. AT 0Z ON JAN 1,1974 = 2442048.5
C THEN S(0) AT 0Z ON JAN 1,1974 = 100.2601800
C
C
      DOUBLE PRECISION TIMDIF,RAHA,SOLSID,SHA
      SHA=100.26467D0
      IRAYD=74001
      IRAHMS=0
      SOLSID=1.00273791D0
      RAHA=RAE+TIMDIF(IRAYD,IRAHMS,IYRDY,IHMS)*SOLSID/4.0D0+SHA
      RAC=DMOD(RAHA,360.0D0)
      IF(RAC.LT.0.0)RAC=RAC+360.0
      RAERAC=RAC
      RETURN
      END
C
C
      FUNCTION RACRAE(IYRDY,IHMS,RAC)
C RACRAE PHILLI 0174 NAV: CONVERTS CELESTIAL ONG TO EARTH LON
C $ FUNCTION RACRAE(IYRDY, IHMS, RAC)  (DAS)
C $ CONVERT CONVERT CELESTIAL LONGITUDE TO EARTH LONGITUDE. FN VAL IS
C $   IN REAL*4 DEGREES.
C $ IYRDY = (I) INPUT  YEAR AND JULIAN DAY (YYDDD)
C $ IHMS = (I) INPUT  TIME (HHMMSS)
C $ RAE = (R) INPUT  CELESTIAL LONGITUDE (DEGREES)
C $$ RACRAE = NAVIGATION, CONVERT, LONGITUDE
C
C
      DOUBLE PRECISION TIMDIF,RAHA,SOLSID,SHA
      SHA=100.26467D0
      IRAYD=74001
      IRAHMS=0
      SOLSID=1.00273791D0
      RAHA=RAC-SHA+TIMDIF(IYRDY,IHMS,IRAYD,IRAHMS)*SOLSID/4.0D0
      RAE=DMOD(RAHA,360.0D0)
      IF(RAE.LT.0.0)RAE=RAE+360.0
      RACRAE=RAE
      RETURN
      END
