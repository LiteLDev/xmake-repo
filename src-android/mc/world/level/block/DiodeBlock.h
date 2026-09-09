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
    // prevent constructor by default
    DiodeBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DiodeBlock();

    virtual bool isSignalSource() const;

    virtual int getDirectSignal(::BlockSource&, ::BlockPos const&, int) const;

    virtual bool mayPlace(::BlockSource&, ::BlockPos const&) const;

    virtual int getVariant(::Block const&) const;

    virtual bool canSpawnOn(::Actor*) const;

    virtual bool canSurvive(::BlockSource&, ::BlockPos const&) const;

    virtual int getSignal(::BlockSource&, ::BlockPos const&, int) const;

    virtual bool isLocked(::BlockSource&, ::BlockPos const&) const;

    virtual bool isSameDiode(::Block const&) const;

    virtual bool shouldPrioritize(::BlockSource&, ::BlockPos const&) const;

    virtual bool isOn() const;

    virtual bool shouldTurnOn(::BlockSource&, ::BlockPos const&) const;

    virtual int getInputSignal(::BlockSource&, ::BlockPos const&) const;

    virtual bool isAlternateInput(::Block const&) const;

    virtual int getAlternateSignal(::BlockSource&, ::BlockPos const&) const;

    virtual int getOutputSignal(::Block const&) const;

    virtual int getTurnOffDelay(::Block const&) const;

    virtual int getTurnOnDelay(::Block const&) const = 0;

    virtual ::Block const* getOnBlock(::Block const*) const = 0;

    virtual ::Block const* getOffBlock(::Block const*) const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DiodeBlock(std::string const&, int, bool);

    MCNAPI int getAlternateSignalAt(::BlockSource&, ::BlockPos const&, int) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isSignalSource() const;

    MCNAPI int $getDirectSignal(::BlockSource&, ::BlockPos const&, int) const;

    MCNAPI bool $mayPlace(::BlockSource&, ::BlockPos const&) const;

    MCNAPI int $getVariant(::Block const&) const;

    MCNAPI bool $canSpawnOn(::Actor*) const;

    MCNAPI bool $canSurvive(::BlockSource&, ::BlockPos const&) const;

    MCNAPI int $getSignal(::BlockSource&, ::BlockPos const&, int) const;

    MCNAPI bool $isLocked(::BlockSource&, ::BlockPos const&) const;

    MCNAPI bool $isSameDiode(::Block const&) const;

    MCNAPI bool $shouldPrioritize(::BlockSource&, ::BlockPos const&) const;

    MCNAPI bool $isOn() const;

    MCNAPI bool $shouldTurnOn(::BlockSource&, ::BlockPos const&) const;

    MCNAPI int $getInputSignal(::BlockSource&, ::BlockPos const&) const;

    MCNAPI bool $isAlternateInput(::Block const&) const;

    MCNAPI int $getAlternateSignal(::BlockSource&, ::BlockPos const&) const;

    MCNAPI int $getOutputSignal(::Block const&) const;

    MCNAPI int $getTurnOffDelay(::Block const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
