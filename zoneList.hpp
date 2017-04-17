#include "tb_defines.hpp"

zoneList[] =
{
//ID and PROFILE = not used
//LINK = zones capturable after this one
//DEPEND = auto-capture/enable upon these zones being held
//DEPQTY = quantity of zones required for DEPEND i.e. can have only 2 of the 3 zones in DEPEND required
//SYNC = required zones for progression

//ID TEAM          	SPAWNTYPE       LINK         SYNC   PROFILE   DEPEND     DEPQTY  ZONE_DESC
{ 0, 0           , 0          ,    	{}         	, {}    , 1      , {}        , 0      },

{ 1, TEAM_BLUE, 	SPAWN_XRAY,     {3,4}      	, {}    , 1      , {}        , 0    , "%3" },
{ 2, TEAM_RED, 		SPAWN_XRAY,     {9}			, {}    , 1      , {}        , 0    , "%3" },

{ 3, TEAM_RED, 		SPAWN_NEVER,    {5}      	, {4}   , 1      , {}        , 0    , "Chernaya mountain" },
{ 4, TEAM_RED, 		SPAWN_NEVER,    {5}  		, {3}   , 1      , {}        , 0    , "Base Klen" },
{ 5, TEAM_RED, 		SPAWN_NEVER,    {6}      	, {}  	, 1      , {}        , 0    , "Gas Station" },
{ 6, TEAM_RED, 		SPAWN_NEVER,    {7}      	, {}    , 1      , {}        , 0    , "Hospital" },
{ 7, TEAM_RED,	 	SPAWN_NEVER,    {8}			, {}    , 1      , {}        , 0    , "Zorro" },
{ 8, TEAM_RED, 		SPAWN_NEVER,    {2}      	, {}    , 1      , {}		 , 0    , "Factory" },

{ 9,TEAM_RED, 		SPAWN_INSTANT,  {}			, {}    , 1	     , {5}     , 2    , "HIDDEN" },
{ 10,TEAM_RED, 		SPAWN_INSTANT,  {}			, {}    , 1      , {7}     , 2    , "HIDDEN" }
};