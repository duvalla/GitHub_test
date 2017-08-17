/* Copyright 2008-2009 Nova Controls */
/* $Id: config.c 950 2009-07-27 18:51:19Z Scott $ */

/** \file
 * \brief System configurations that affect the entire controller operation.
 */

#include <config.h>
#include <revision.h>

const unsigned char lcdContrast = 60;
//const unsigned char lcdContrast_test = 60;
//const unsigned char lcdContrast_test1 = 60;

const char machineName[NAME_LENGTH] = "               ";
const char fromDate[DATE_LENGTH] = "2009-01-01";
const char toDate[DATE_LENGTH] = "2009-01-01";
const char managerPassword[5]   = "0123";
const char installerPassword[6] = "01234";
const char * const masterPassword = "01234";
//const char installerPassword[6] = "00000";// re commit
//const char * const masterPassword = "00000";



SHARED_MEMORY sharedMem;
