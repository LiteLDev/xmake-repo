#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/state/PropertyContainer.h"
#include "mc/world/actor/state/PropertyMetadata.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class HashedString;
class PropertyGroup;
class PropertyMetadata;
class RenderParams;
class Tag;
struct MolangScriptArg;
struct PropertySyncData;
// clang-format on

class PropertyComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<const PropertyGroup>>> mPropertyGroup;
    ::ll::TypedStorage<8, 8, std::bitset<32>>                                        mDirtyIntProperties;
    ::ll::TypedStorage<8, 8, std::bitset<32>>                                        mDirtyFloatProperties;
    ::ll::TypedStorage<8, 8, std::bitset<32>>                                        mDirtyBoolProperties;
    ::ll::TypedStorage<8, 8, std::bitset<32>>                                        mDirtyEnumIndexProperties;
    ::ll::TypedStorage<1, 1, bool>                                                   mEverythingDirty;
    ::ll::TypedStorage<8, 112, ::PropertyContainer>                                  mPropertyContainer;
    // NOLINTEND

public:
    // prevent constructor by default
    PropertyComponent& operator=(PropertyComponent const&);
    PropertyComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PropertyComponent(::gsl::not_null<std::shared_ptr<const PropertyGroup>>, ::RenderParams&);

    MCNAPI void addAdditionalSaveData(::CompoundTag&) const;

    MCNAPI void applyPendingChanges(std::unordered_map<ulong, std::variant<int, float, bool, ulong>> const&);

    MCNAPI bool getBool(ulong) const;

    MCNAPI float getFloat(ulong) const;

    MCNAPI int getInt(ulong) const;

    MCNAPI bool getMolangValue(ulong, ::MolangScriptArg&) const;

    MCNAPI ::PropertyMetadata::ContainedType getPropertyType(ulong) const;

    MCNAPI ::HashedString const& getString(ulong) const;

    MCNAPI bool hasDirtyProperties() const;

    MCNAPI ::PropertySyncData packAllSyncData() const;

    MCNAPI ::PropertySyncData packDirtySyncData();

    MCNAPI void readLoadedProperties(::CompoundTag const&);

    MCNAPI void setAliasProperties(
        std::unordered_map<HashedString, std::shared_ptr<Tag>> const&,
        std::string const&,
        std::string const&
    );

    MCNAPI std::optional<bool> tryGetBool(ulong) const;

    MCNAPI std::optional<float> tryGetFloat(ulong) const;

    MCNAPI std::optional<int> tryGetInt(ulong) const;

    MCNAPI ::HashedString const* tryGetString(ulong) const;

    MCNAPI std::optional<std::variant<int, float, bool, std::string>> tryGetValueVariant(ulong) const;

    MCNAPI ~PropertyComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<std::shared_ptr<const PropertyGroup>>, ::RenderParams&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
