/*
** Copyright (C) 2016 Airbus Group, stephane duverger <stephane.duverger@airbus.com>
**
** This program is free software; you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation; either version 2 of the License, or
** (at your option) any later version.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License along
** with this program; if not, write to the Free Software Foundation, Inc.,
** 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/
#ifndef __VM_PAGING_H__
#define __VM_PAGING_H__

#include <types.h>
#include <npg.h>

typedef struct vm_paging
{
   npg_pml4e_t  *pml4; /* strictly aligned */
   void         *arg;  /* available */
   size_t        asid; /* address space identifier */

} __attribute__((packed)) vm_pgmem_t;

#endif
