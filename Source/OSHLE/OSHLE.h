/*
Copyright (C) 2001 StrmnNrmn

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

*/

#ifndef OSHLE_OSHLE_H_
#define OSHLE_OSHLE_H_

extern u32 gNumOfOSFunctions;
void Patch_Reset();
void Patch_ApplyPatches();
void Patch_PatchAll();

#ifndef DAEDALUS_SILENT
const char * Patch_GetJumpAddressName(u32 jump);
u32 Patch_GetSymbolAddress(const char * name);
#endif
#ifdef DUMPOSFUNCTIONS
void Patch_DumpOsThreadInfo();
void Patch_DumpOsQueueInfo();
void Patch_DumpOsEventInfo();
#endif

#endif // OSHLE_OSHLE_H_