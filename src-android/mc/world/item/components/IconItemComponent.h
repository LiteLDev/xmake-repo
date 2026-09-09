#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/AssetType.h"
#include "mc/deps/shared_types/util/Reference.h"
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class ComponentItem;
class HashedString;
class SemVersion;
namespace SharedTypes::v1_21_80 { struct IconItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class IconItemComponent : public ::NetworkedItemComponent<IconItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mTextures;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IconItemComponent();

    virtual void _initializeComponent(::ComponentItem&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit IconItemComponent(::SharedTypes::v1_21_80::IconItemComponent);

    MCNAPI std::string const& getBundleOpenBackTexture() const;

    MCNAPI std::string const& getBundleOpenFrontTexture() const;

    MCNAPI std::string const& getDefaultTexture() const;

    MCNAPI std::string const& getDyedTexture() const;

    MCNAPI std::string const& getIconTrimPath() const;

    MCNAPI std::unordered_map<std::string, SharedTypes::Reference<(SharedTypes::AssetType)11>> const&
           getTextures() const;

    MCNAPI void setOwnerIcon() const;

    MCNAPI void setTexturePath(std::string const&);
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
    MCNAPI void* $ctor(::SharedTypes::v1_21_80::IconItemComponent);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_initializeComponent(::ComponentItem&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
