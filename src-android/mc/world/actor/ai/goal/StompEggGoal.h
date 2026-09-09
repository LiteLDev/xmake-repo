#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/StompBlockGoal.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Level;
class Mob;
// clang-format on

class StompEggGoal : public ::StompBlockGoal {
public:
    // prevent constructor by default
    StompEggGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StompEggGoal();

    virtual void appendDebugInfo(std::string&) const;

    virtual void setInterval(int const);

    virtual void _createBreakProgressParticles(::Level&, ::BlockSource&, ::BlockPos);

    virtual void _createDestroyParticles(::Level&, ::BlockSource&, ::BlockPos);

    virtual void _playBreakProgressSound(::Level&, ::BlockSource&, ::BlockPos);

    virtual void _playDestroySound(::Level&, ::BlockSource&, ::BlockPos);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit StompEggGoal(::Mob&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Mob&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $appendDebugInfo(std::string&) const;

    MCNAPI void $setInterval(int const);

    MCNAPI void $_createBreakProgressParticles(::Level&, ::BlockSource&, ::BlockPos);

    MCNAPI void $_createDestroyParticles(::Level&, ::BlockSource&, ::BlockPos);

    MCNAPI void $_playBreakProgressSound(::Level&, ::BlockSource&, ::BlockPos);

    MCNAPI void $_playDestroySound(::Level&, ::BlockSource&, ::BlockPos);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
