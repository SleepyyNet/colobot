// * This file is part of the COLOBOT source code
// * Copyright (C) 2001-2008, Daniel ROUX & EPSITEC SA, www.epsitec.ch
// * Copyright (C) 2012 Polish Portal of Colobot (PPC)
// *
// * This program is free software: you can redistribute it and/or modify
// * it under the terms of the GNU General Public License as published by
// * the Free Software Foundation, either version 3 of the License, or
// * (at your option) any later version.
// *
// * This program is distributed in the hope that it will be useful,
// * but WITHOUT ANY WARRANTY; without even the implied warranty of
// * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// * GNU General Public License for more details.
// *
// * You should have received a copy of the GNU General Public License
// * along with this program. If not, see  http://www.gnu.org/licenses/.

// autoflag.h

#pragma once


#include "object/auto/auto.h"



class CAutoFlag : public CAuto
{
public:
    CAutoFlag(CInstanceManager* iMan, CObject* object);
    ~CAutoFlag();

    void        DeleteObject(bool bAll=false);

    void        Init();
    void        Start(int param);
    bool        EventProcess(const Event &event);
    Error       GetError();

protected:

protected:
    float       m_strong;
    int         m_param;
    float       m_progress;
};
