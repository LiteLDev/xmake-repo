#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/StompBlockGoal.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Level;
#if defined(LL_PLAT_A) // @header-generator platform
class Mob;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class StompEggGoal : public ::StompBlockGoal {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    StompEggGoal();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~StompEggGoal();
#else // @header-generator platform
    virtual void appendDebugInfo(::std::string& str) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void appendDebugInfo(std::string&) const;
#else // @header-generator platform
    virtual void setInterval(int const interval) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setInterval(int const);
#else // @header-generator platform
    virtual void _createBreakProgressParticles(::Level& level, ::BlockSource& region, ::BlockPos pos) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _createBreakProgressParticles(::Level&, ::BlockSource&, ::BlockPos);
#else // @header-generator platform
    virtual void _createDestroyParticles(::Level& level, ::BlockSource& region, ::BlockPos pos) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _createDestroyParticles(::Level&, ::BlockSource&, ::BlockPos);
#else // @header-generator platform
    virtual void _playBreakProgressSound(::Level&, ::BlockSource&, ::BlockPos pos) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual void _playDestroySound(::Level&, ::BlockSource&, ::BlockPos pos) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $appendDebugInfo(std::string&) const;
#else // @header-generator platform
    MCAPI void $appendDebugInfo(::std::string& str) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setInterval(int const);
#else // @header-generator platform
    MCFOLD void $setInterval(int const interval);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_createBreakProgressParticles(::Level&, ::BlockSource&, ::BlockPos);
#else // @header-generator platform
    MCAPI void $_createBreakProgressParticles(::Level& level, ::BlockSource& region, ::BlockPos pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_createDestroyParticles(::Level&, ::BlockSource&, ::BlockPos);
#else // @header-generator platform
    MCAPI void $_createDestroyParticles(::Level& level, ::BlockSource& region, ::BlockPos pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_playBreakProgressSound(::Level&, ::BlockSource&, ::BlockPos);
#else // @header-generator platform
    MCAPI void $_playBreakProgressSound(::Level&, ::BlockSource&, ::BlockPos pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_playDestroySound(::Level&, ::BlockSource&, ::BlockPos);
#else // @header-generator platform
    MCAPI void $_playDestroySound(::Level&, ::BlockSource&, ::BlockPos pos);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
