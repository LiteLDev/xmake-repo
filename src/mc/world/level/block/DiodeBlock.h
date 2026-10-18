#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
// clang-format on

class DiodeBlock : public ::BlockType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mOn;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    DiodeBlock();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~DiodeBlock();
#else // @header-generator platform
    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isSignalSource() const;
#else // @header-generator platform
    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getDirectSignal(::BlockSource&, ::BlockPos const&, int) const;
#else // @header-generator platform
    virtual int getVariant(::Block const& block) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool mayPlace(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual int getDirectSignal(::BlockSource& region, ::BlockPos const& pos, int dir) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getVariant(::Block const&) const;
#else // @header-generator platform
    virtual int getSignal(::BlockSource& region, ::BlockPos const& pos, int dir) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canSpawnOn(::Actor*) const;
#else // @header-generator platform
    virtual bool isSignalSource() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canSurvive(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual bool isLocked(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getSignal(::BlockSource&, ::BlockPos const&, int) const;
#else // @header-generator platform
    virtual bool isSameDiode(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isLocked(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual bool shouldPrioritize(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isSameDiode(::Block const&) const;

    virtual bool shouldPrioritize(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual bool canSpawnOn(::Actor*) const /*override*/;
#endif // @header-generator platform

    virtual bool isOn() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool shouldTurnOn(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual bool shouldTurnOn(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getInputSignal(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual int getInputSignal(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isAlternateInput(::Block const&) const;
#else // @header-generator platform
    virtual bool isAlternateInput(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getAlternateSignal(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    virtual int getAlternateSignal(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getOutputSignal(::Block const&) const;
#else // @header-generator platform
    virtual int getOutputSignal(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getTurnOffDelay(::Block const&) const;
#else // @header-generator platform
    virtual int getTurnOffDelay(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getTurnOnDelay(::Block const&) const = 0;
#else // @header-generator platform
    virtual int getTurnOnDelay(::Block const& block) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Block const* getOnBlock(::Block const*) const = 0;
#else // @header-generator platform
    virtual ::Block const* getOnBlock(::Block const* block) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Block const* getOffBlock(::Block const*) const = 0;
#else // @header-generator platform
    virtual ::Block const* getOffBlock(::Block const* block) const = 0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI DiodeBlock(std::string const&, int, bool);

    MCNAPI int getAlternateSignalAt(::BlockSource&, ::BlockPos const&, int) const;
#else // @header-generator platform
    MCAPI int getAlternateSignalAt(::BlockSource& region, ::BlockPos const& pos, int facing) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool isDiode(::Block const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static bool isDiode(::Block const& block);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isSignalSource() const;
#else // @header-generator platform
    MCFOLD int $getVariant(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getDirectSignal(::BlockSource&, ::BlockPos const&, int) const;
#else // @header-generator platform
    MCAPI int $getDirectSignal(::BlockSource& region, ::BlockPos const& pos, int dir) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $mayPlace(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI int $getSignal(::BlockSource& region, ::BlockPos const& pos, int dir) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getVariant(::Block const&) const;
#else // @header-generator platform
    MCFOLD bool $isSignalSource() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canSpawnOn(::Actor*) const;
#else // @header-generator platform
    MCAPI bool $isSameDiode(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canSurvive(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI bool $shouldPrioritize(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getSignal(::BlockSource&, ::BlockPos const&, int) const;
#else // @header-generator platform
    MCFOLD bool $canSpawnOn(::Actor*) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isLocked(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    MCFOLD bool $isOn() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isSameDiode(::Block const&) const;
#else // @header-generator platform
    MCAPI bool $shouldTurnOn(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $shouldPrioritize(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI int $getInputSignal(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isOn() const;
#else // @header-generator platform
    MCAPI int $getAlternateSignal(::BlockSource& region, ::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $shouldTurnOn(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    MCFOLD int $getOutputSignal(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getInputSignal(::BlockSource&, ::BlockPos const&) const;
#else // @header-generator platform
    MCAPI int $getTurnOffDelay(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isAlternateInput(::Block const&) const;
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getAlternateSignal(::BlockSource&, ::BlockPos const&) const;

    MCNAPI int $getOutputSignal(::Block const&) const;

    MCNAPI int $getTurnOffDelay(::Block const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};
