#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/block_events/BlockEventBase.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
// clang-format on

namespace BlockEvents {

class ActorInternalEvent : public ::BlockEvents::BlockEventBase {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Actor&>           mEntity;
    ::ll::TypedStorage<8, 24, std::string const> mName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Actor&>             mEntity;
    ::ll::TypedStorage<8, 32, ::std::string const> mName;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ActorInternalEvent& operator=(ActorInternalEvent const&);
    ActorInternalEvent(ActorInternalEvent const&);
    ActorInternalEvent();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ActorInternalEvent();

    virtual ::BlockSource const& getBlockSource() const;
#else // @header-generator platform
    virtual ::BlockSource const& getBlockSource() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Actor& getEntity() const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI ActorInternalEvent(::BlockPos pos, ::Actor& entity, ::std::string const& name);
#endif
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& getName() const;
#else // @header-generator platform
public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCFOLD void* $ctor(::BlockPos pos, ::Actor& entity, ::std::string const& name);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockSource const& $getBlockSource() const;
    // NOLINTEND
#else // @header-generator platform
    MCFOLD ::BlockSource const& $getBlockSource() const;
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

} // namespace BlockEvents
