#include "ServerBrowser.h"

bool ServerBrowser::registerServer(ServerInfo newServer)
{
	servers[serverCount].regionID = newServer.regionID;
	servers[serverCount].currentPlayerCount = newServer.currentPlayerCount;
	servers[serverCount].maxPlayers = newServer.maxPlayers;
	servers[serverCount].ping = newServer.ping;

	serverCount++;
}

int ServerBrowser::getServers(ServerInfo * dstArray, size_t dstSize, int maxResults,
	int pingLimit, int regionSpec, bool allowEmpty, bool allowFull)
{
	int total = 0;

	while (total <= maxResults)
	{
		for (int i = 0; i < dstSize; ++i)
		{
			if (servers[i].ping <= pingLimit && servers[i].regionID == regionSpec)
			{
				dstArray[i].regionID = servers[i].regionID;
				dstArray[i].currentPlayerCount = servers[i].currentPlayerCount;
				dstArray[i].maxPlayers = servers[i].maxPlayers;
				dstArray[i].ping = servers[i].ping;
				total++;
			}
		}
	}

	return total;
}
