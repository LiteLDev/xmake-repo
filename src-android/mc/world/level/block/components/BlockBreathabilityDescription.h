#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/BlockComponentDescription.h"
#include "mc/world/level/block/components/BreathingType.h"

// auto generated forward declare list
// clang-format off
class CerealSchemaUpgradeSet;
class CompoundTag;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BlockBreathabilityDescription : public ::BlockComponentDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::BreathingType> mType;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockBreathabilityDescription& operator=(BlockBreathabilityDescription const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockBreathabilityDescription();

    virtual std::string const& getName() const;

    virtual bool isNetworkComponent() const;

    virtual std::unique_ptr<CompoundTag> buildNetworkTag(::cereal::ReflectionCtx const&) const;

    virtual void initializeFromNetwork(::CompoundTag const&, ::cereal::ReflectionCtx const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& NameID();
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

    MCNAPI bool $isNetworkComponent() const;

    MCNAPI std::unique_ptr<CompoundTag> $buildNetworkTag(::cereal::ReflectionCtx const&) const;

    MCNAPI void $initializeFromNetwork(::CompoundTag const&, ::cereal::ReflectionCtx const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
