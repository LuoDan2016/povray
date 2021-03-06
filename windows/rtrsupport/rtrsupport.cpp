//******************************************************************************
///
/// @file windows/rtrsupport/rtrsupport.cpp
///
/// @todo   What's in here?
///
/// @copyright
/// @parblock
///
/// Persistence of Vision Ray Tracer ('POV-Ray') version 3.8.
/// Copyright 1991-2019 Persistence of Vision Raytracer Pty. Ltd.
///
/// POV-Ray is free software: you can redistribute it and/or modify
/// it under the terms of the GNU Affero General Public License as
/// published by the Free Software Foundation, either version 3 of the
/// License, or (at your option) any later version.
///
/// POV-Ray is distributed in the hope that it will be useful,
/// but WITHOUT ANY WARRANTY; without even the implied warranty of
/// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
/// GNU Affero General Public License for more details.
///
/// You should have received a copy of the GNU Affero General Public License
/// along with this program.  If not, see <http://www.gnu.org/licenses/>.
///
/// ----------------------------------------------------------------------------
///
/// POV-Ray is based on the popular DKB raytracer version 2.12.
/// DKBTrace was originally written by David K. Buck.
/// DKBTrace Ver 2.0-2.12 were written by David K. Buck & Aaron A. Collins.
///
/// @endparblock
///
//******************************************************************************

#define POVWIN_FILE
#define _WIN32_IE COMMONCTRL_VERSION

#include <windows.h>
#include <tchar.h>

#include "pvengine.h"

#ifdef RTR_SUPPORT

#include "rtrvidcap.h"
#include "rtrsupport.h"

// this must be the last file included
#include "syspovdebug.h"

std::string VideoSourceName;

namespace povwin
{

// this code has been stubbed out: need to re-implement

size_t GetVideoSourceNames(std::vector<std::string>& result)
{
  return 0;
}

void SetVideoSourceName(const char *Name)
{
}

const std::string& GetVideoSourceName(void)
{
  return VideoSourceName;
}

void NextFrame(void)
{
}

}
// end of namespace povwin

#endif
