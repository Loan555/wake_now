#include "wol.h"
#include <QHostAddress>
#include <QUdpSocket>

wol::wol()
{



}

void wol::wakeOnLan(QString MAC)
{
//            char MACAddr [6];
//            char MagicPacket [102]; // Magic package for remote boot

//            int j = sscanf (MAC.toLatin1().data(), "%2x-%2x-%2x-%2x-%2x-%2x",
//                            & MACAddr [0], & MACAddr [1], & MACAddr [2], & MACAddr [3], & MACAddr [4], & MACAddr [5]);

//            // Set to hexadecimal before the magicpacket array 6 characters ff
//            memset (MagicPacket, 0xff, 6);

//            int packetsize = 6; // the beginning of the initial value is 6, do not wrong. I is because the effect of the initial value of the written as 0, it is too effortless.
//            // Build MagicPacket.
//            for (int i = 0; i <16; i++)
//            {
//                memcpy (MagicPacket + packetsize, MACAddr, 6);
//                packetsize += 6;
//            }

//            QHostAddress FakeAddress;
//            FakeAddress.setAddress ("192.168.0.255");

//            QUdpSocket udpSocket;
//            udpSocket.writeDatagram(MagicPacket, 102, FakeAddress, 9);

    MAC = "123";
}

