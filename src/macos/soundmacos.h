/**************************************************************************
*   Copyright (C) 2023 by Mario Klebsch                                   *
*   mario@klebsch.de                                                      *
*   http://klebsch.de                                                     *
*                                                                         *
*   This program is free software; you can redistribute it and/or modify  *
*   it under the terms of the GNU General Public License as published by  *
*   the Free Software Foundation; either version 2 of the License, or     *
*   (at your option) any later version.                                   *
*                                                                         *
*   This program is distributed in the hope that it will be useful,       *
*   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
*   GNU General Public License for more details.                          *
*                                                                         *
*   You should have received a copy of the GNU General Public License     *
*   along with this program; if not, write to the                         *
*   Free Software Foundation, Inc.,                                       *
*   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
***************************************************************************/

#ifndef SOUNDMACOS_H
#define SOUNDMACOS_H

class soundBase;

#include <string>
#include <list>

namespace soundMacos
{
bool EnableAudioInput();

struct soundCard
{
	std::string Label;
	std::string UID;
	bool SupportsInput = false;
	bool SupportsOutput = false;
};

std::list<const soundCard> getCardList();

soundBase *Create();

}

#endif /* SOUNDMACOS_H */
