/*  =========================================================================
    fty-metric-composite - Agent that computes new metrics from bunch of other metrics

    Copyright (C) 2014 - 2020 Eaton

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
    =========================================================================
*/

#ifndef FTY_METRIC_COMPOSITE_H_H_INCLUDED
#define FTY_METRIC_COMPOSITE_H_H_INCLUDED

//  Include the project library file
#include "fty_metric_composite_library.h"

//  Add your own public definitions here, if you need them

// since this agent doesn't have a config file, hardwire the log config here
#define LOG_CONFIG  "/etc/fty/ftylog.cfg"

#endif
