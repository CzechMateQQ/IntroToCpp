#pragma once

struct ServerInfo
{
	int regionID;             // region
	int currentPlayerCount;   // current player count
	int maxPlayers;           // max player count
	int ping;                 // ping
};

class ServerBrowser
{
private:
	//an array of all registered servers
	ServerInfo servers[50];

	//count of all registered servers
	int serverCount;

public:
	//registers a server
	bool registerServer(ServerInfo newServer);

	//copies server entries into given array
	//returns total number of servers provided
	int getServers(ServerInfo * dstArray, size_t dstSize, int maxResults, 
		int pingLimit, int regionSpec, bool allowEmpty, bool allowFull);
};

