#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/actor/ActorDamageSource.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
// clang-format on

class ActorDamageByBlockSource : public ::ActorDamageSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const*> mBlock;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ActorDamageByBlockSource();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ActorDamageByBlockSource();
#else // @header-generator platform
    virtual bool isBlockSource() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isBlockSource() const;
#else // @header-generator platform
    virtual ::std::unique_ptr<::ActorDamageSource> clone() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<ActorDamageSource> clone() const;

    virtual std::pair<std::string, std::vector<std::string>> _getDeathMessageInternal(std::string const&, ::Actor*) const;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::std::pair<::std::string, ::std::vector<::std::string>>
    _getDeathMessageInternal(::std::string const& deadName, ::Actor* dead) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isBlockSource() const;
#else // @header-generator platform
    MCFOLD bool $isBlockSource() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<ActorDamageSource> $clone() const;
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::ActorDamageSource> $clone() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::pair<std::string, std::vector<std::string>>
           $_getDeathMessageInternal(std::string const&, ::Actor*) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::std::pair<::std::string, ::std::vector<::std::string>>
    $_getDeathMessageInternal(::std::string const& deadName, ::Actor* dead) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
