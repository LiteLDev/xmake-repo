#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInfo.h"

class ActorInfoRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<ulong, uint>>     mActorInfoNameMap;
    ::ll::TypedStorage<8, 40, std::unordered_map<uint, ActorInfo>> mActorInfoMap;
    ::ll::TypedStorage<4, 4, uint>                                 mLastId;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void digestInfoFromServer(std::vector<ActorInfo> const&);

    MCNAPI ::ActorInfo const& getActorInfo(uint) const;

    MCNAPI uint getActorInfoId(ulong const&) const;

    MCNAPI uint getActorInfoId(std::string const&) const;

    MCNAPI std::vector<ActorInfo> getActorInfoList() const;

    MCNAPI bool isSpawnEggAvailable(std::string);

    MCNAPI void registerActorInfo(::ActorInfo const&);

    MCNAPI void setSpawnEggAvailable(std::string, bool);
    // NOLINTEND
};
