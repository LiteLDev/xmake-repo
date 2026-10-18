#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/actor/ActorInfo.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
struct ActorInfo;
// clang-format on
#endif // @header-generator platform

class ActorInfoRegistry {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<ulong, uint>>     mActorInfoNameMap;
    ::ll::TypedStorage<8, 40, std::unordered_map<uint, ActorInfo>> mActorInfoMap;
    ::ll::TypedStorage<4, 4, uint>                                 mLastId;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint64, uint>>      mActorInfoNameMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint, ::ActorInfo>> mActorInfoMap;
    ::ll::TypedStorage<4, 4, uint>                                     mLastId;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void digestInfoFromServer(std::vector<ActorInfo> const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void digestInfoFromServer(::std::vector<::ActorInfo> const& infoList);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorInfo const& getActorInfo(uint) const;
#else // @header-generator platform
    MCAPI ::ActorInfo const& getActorInfo(uint infoRuntimeId) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint getActorInfoId(ulong const&) const;
#else // @header-generator platform
    MCAPI uint getActorInfoId(::std::string const& name) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint getActorInfoId(std::string const&) const;
#else // @header-generator platform
    MCAPI ::std::vector<::ActorInfo> getActorInfoList() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<ActorInfo> getActorInfoList() const;
#else // @header-generator platform
    MCAPI bool isSpawnEggAvailable(::std::string identifier);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isSpawnEggAvailable(std::string);
#else // @header-generator platform
    MCAPI void registerActorInfo(::ActorInfo const& info);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void registerActorInfo(::ActorInfo const&);

    MCNAPI void setSpawnEggAvailable(std::string, bool);
#else // @header-generator platform
    MCAPI void setSpawnEggAvailable(::std::string identifier, bool val);
#endif // @header-generator platform
    // NOLINTEND
};
