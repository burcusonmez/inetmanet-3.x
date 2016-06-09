//
// Copyright (C) 2013 OpenSim Ltd.
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program; if not, see <http://www.gnu.org/licenses/>.
//

#include "inet/physicallayer/base/packetlevel/TracingObstacleLossBase.h"

namespace inet {

namespace physicallayer {

simsignal_t TracingObstacleLossBase::obstaclePenetratedSignal = registerSignal("obstaclePenetrated");

TracingObstacleLossBase::ObstaclePenetratedEvent::ObstaclePenetratedEvent(const IPhysicalObject *object, Coord intersection1, Coord intersection2, Coord normal1, Coord normal2) :
    object(object),
    intersection1(intersection1),
    intersection2(intersection2),
    normal1(normal1),
    normal2(normal2)
{
}

} // namespace physicallayer

} // namespace inet

