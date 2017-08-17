/* Copyright 2008 Nova Controls */
/* $Id: config_nova.c 1271 2012-07-27 21:07:36Z slafferty $ */

/* DESCRIPTION */
/* This file contains the system configuration that affects the entire
 * controller operation.
 */

/* includes */
#include <config.h>
#include <revision.h>

/* defines */
#define PART_NUMBER   "P/N: 95-09114-07 "
#ifdef PG_PLM_WINSIM_HARDWARE
#define COMPANY_NAME  "P&G PROLINE  "
#else
//#define COMPANY_NAME  "NOVA CONTROLS  "
#define COMPANY_NAME    "HYDRO SYSTEMS  "
#endif
// this is a new testing feature- dpl

char testing =0; // changed after the code review
#if 0
/* globals */
const char * const masterName <member>
        <project>TotalEclipse</project>
        <configuration>Release EvoClean</configuration>
      </member>e = COMPANY_NAME;
#endif //dpl
const char * const masterName = COMPANY_NAME;
const char companyName[NAME_LENGTH] = COMPANY_NAME;
const char backdoorPassword[6] = "95076";
const char * const partNumber = PART_NUMBER;
const char * const softwareId = "\n"
                                PRODUCT_NAME "\n"
                                PART_NUMBER "\n"
                                "RevA " REV_NUMBER;
const CONFIG sysConfig = {
    STANDARD_MAPPING_MODE,
    SIX_EDUCTOR_FLUSH,
    DISABLE_PRIME,
    METRIC,
    2, // 2sec Flush time is defaulted -PD
    0,
    0,
    0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0,
    0,
    0,
    COMPANY_NAME
};
