#include "stdafx.h"
#include "RatedPlayer.h"

RatedPlayer::RatedPlayer(unsigned int r, const string & fn, const string & ln, bool ht)
	:TableTennisPlayer(fn, ln, ht)
{
	rating = r;
}

RatedPlayer::RatedPlayer(unsigned int r, const TableTennisPlayer & tp)
	: TableTennisPlayer(tp), rating(r)
{
}

RatedPlayer::~RatedPlayer()
{
}
