#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/BlockComponentDescription.h"

// auto generated forward declare list
// clang-format off
class BlockComponentStorage;
struct BlockRedstoneConsumerConstructionOptions;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class BlockRedstoneConsumerDescription : public ::BlockComponentDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, schar> mMinPower;
    ::ll::TypedStorage<1, 1, bool>  mPropagatePower;
    ::ll::TypedStorage<1, 1, bool>  mConsumePowerAnyDirection;
    ::ll::TypedStorage<1, 1, bool>  mAcceptSameDirection;
    ::ll::TypedStorage<1, 1, bool>  mAcceptHalfPulse;
    ::ll::TypedStorage<1, 1, bool>  mIgnoreFirstUpdate;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockRedstoneConsumerDescription& operator=(BlockRedstoneConsumerDescription const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockRedstoneConsumerDescription();

    virtual std::string const& getName() const;

    virtual void initializeComponent(::BlockComponentStorage&) const;

    virtual void initializeComponentFromCode(::BlockComponentStorage&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BlockRedstoneConsumerDescription(::BlockRedstoneConsumerConstructionOptions);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& NameID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockRedstoneConsumerConstructionOptions);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::string const& $getName() const;

    MCNAPI void $initializeComponent(::BlockComponentStorage&) const;

    MCNAPI void $initializeComponentFromCode(::BlockComponentStorage&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
