#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class ComponentItem;
class CompoundTag;
class HashedString;
class SemVersion;
namespace SharedTypes::v1_20_50 { struct InteractButtonItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class InteractButtonItemComponent : public ::ItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>         mRequiresInteract;
    ::ll::TypedStorage<8, 24, std::string> mInteractText;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InteractButtonItemComponent();

    virtual bool isNetworkComponent() const;

    virtual std::unique_ptr<CompoundTag> buildNetworkTag(::cereal::ReflectionCtx const&) const;

    virtual bool initializeFromNetwork(::CompoundTag const&, ::cereal::ReflectionCtx const&);

    virtual void _initializeComponent(::ComponentItem&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit InteractButtonItemComponent(::SharedTypes::v1_20_50::InteractButtonItemComponent);

    MCNAPI std::string getInteractText() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    bindType(::cereal::ReflectionCtx&, std::vector<AllExperiments> const&, std::optional<SemVersion>);

    MCNAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_20_50::InteractButtonItemComponent);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isNetworkComponent() const;

    MCNAPI std::unique_ptr<CompoundTag> $buildNetworkTag(::cereal::ReflectionCtx const&) const;

    MCNAPI bool $initializeFromNetwork(::CompoundTag const&, ::cereal::ReflectionCtx const&);

    MCNAPI void $_initializeComponent(::ComponentItem&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
