#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BasePressurePlateBlock.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Experiments;
#if defined(LL_PLAT_A) // @header-generator platform
class Material;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class PressurePlateBlock : public ::BasePressurePlateBlock {
public:
    // PressurePlateBlock inner types define
    enum class Sensitivity : int {
#if defined(LL_PLAT_A) // @header-generator platform
        EVERYTHING = 0,
        MOBS       = 1,
        PLAYERS    = 2,
#else // @header-generator platform
        Everything = 0,
        Mobs       = 1,
        Players    = 2,
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::PressurePlateBlock::Sensitivity> mSensitivity;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    PressurePlateBlock();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~PressurePlateBlock();
#else // @header-generator platform
    virtual int getSignalStrength(::BlockSource& region, ::BlockPos const& pos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _addHardCodedBlockComponents(::Experiments const&);
#else // @header-generator platform
    virtual int getSignalForData(int data) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getSignalStrength(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual int getRedstoneSignal(int signal) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getSignalForData(int) const;

    virtual int getRedstoneSignal(int) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PressurePlateBlock(std::string const&, int, ::Material const&, ::PressurePlateBlock::Sensitivity);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, ::Material const&, ::PressurePlateBlock::Sensitivity);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_addHardCodedBlockComponents(::Experiments const&);
#else // @header-generator platform
    MCAPI int $getSignalStrength(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getSignalStrength(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI int $getSignalForData(int data) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getSignalForData(int) const;
#else // @header-generator platform
    MCAPI int $getRedstoneSignal(int signal) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getRedstoneSignal(int) const;
#else // @header-generator platform
    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
