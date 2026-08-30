#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/state/PropertyMetadata.h"
#include "mc/world/actor/state/PropertyValues.h"

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

class PropertyContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<const PropertyGroup>>> mPropertyGroup;
    ::ll::TypedStorage<8, 96, ::PropertyValues>                                      mValues;
    // NOLINTEND

public:
    // prevent constructor by default
    PropertyContainer& operator=(PropertyContainer const&);
    PropertyContainer();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PropertyContainer(::gsl::not_null<std::shared_ptr<const PropertyGroup>>, ::RenderParams&);

    MCNAPI void _addDataToCompoundTag(::CompoundTag&, ::PropertyMetadata const&) const;

    MCNAPI std::optional<ulong> _getPropertyTypeArrayIndex(ulong, ::PropertyMetadata::ContainedType) const;

    MCNAPI bool _readValueFromTag(::PropertyMetadata const&, ::Tag const&);

    MCNAPI void addAdditionalSaveDataToCompoundTag(::CompoundTag&) const;

    MCNAPI void addEntryToSyncData(::PropertyMetadata const&, ::PropertySyncData&) const;

    MCNAPI std::optional<bool> getBoolValue(ulong) const;

    MCNAPI std::optional<ulong> getEnumIndexValue(ulong) const;

    MCNAPI std::optional<float> getFloatValue(ulong) const;

    MCNAPI std::optional<int> getIntValue(ulong) const;

    MCNAPI bool getMolangValue(ulong, ::MolangScriptArg&) const;

    MCNAPI std::optional<std::variant<int, float, bool, std::string>> getValueVariant(ulong) const;

    MCNAPI void readLoadedProperties(::CompoundTag const&);

    MCNAPI void setAliasProperties(
        std::unordered_map<HashedString, std::shared_ptr<Tag>> const&,
        std::string const&,
        std::string const&
    );

    MCNAPI void setBoolValue(ulong, bool);

    MCNAPI void setEnumIndexValue(ulong, ulong);

    MCNAPI void setFloatValue(ulong, float);

    MCNAPI void setIntValue(ulong, int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<std::shared_ptr<const PropertyGroup>>, ::RenderParams&);
    // NOLINTEND
};
