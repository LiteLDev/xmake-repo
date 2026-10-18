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
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct PropertyValues;
#endif // @header-generator platform
// clang-format on

class PropertyContainer {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<const PropertyGroup>>> mPropertyGroup;
    ::ll::TypedStorage<8, 96, ::PropertyValues>                                      mValues;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::PropertyGroup const>>> mPropertyGroup;
    ::ll::TypedStorage<8, 104, ::PropertyValues>                                         mValues;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    PropertyContainer& operator=(PropertyContainer const&);
    PropertyContainer();

#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    PropertyContainer();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI PropertyContainer(::gsl::not_null<std::shared_ptr<const PropertyGroup>>, ::RenderParams&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI PropertyContainer(
        ::gsl::not_null<::std::shared_ptr<::PropertyGroup const>> propertyGroup,
        ::RenderParams&                                           renderParams
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _addDataToCompoundTag(::CompoundTag&, ::PropertyMetadata const&) const;
#else // @header-generator platform
    MCAPI void _addDataToCompoundTag(::CompoundTag& compoundTag, ::PropertyMetadata const& propertyMetadata) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<ulong> _getPropertyTypeArrayIndex(ulong, ::PropertyMetadata::ContainedType) const;
#else // @header-generator platform
    MCAPI ::std::optional<uint64>
    _getPropertyTypeArrayIndex(uint64 propertyNameHash, ::PropertyMetadata::ContainedType propertyType) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _readValueFromTag(::PropertyMetadata const&, ::Tag const&);
#else // @header-generator platform
    MCAPI bool _readValueFromTag(::PropertyMetadata const& propertyMetadata, ::Tag const& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addAdditionalSaveDataToCompoundTag(::CompoundTag&) const;
#else // @header-generator platform
    MCAPI void addEntryToSyncData(::PropertyMetadata const& propMetadata, ::PropertySyncData& syncData) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addEntryToSyncData(::PropertyMetadata const&, ::PropertySyncData&) const;
#else // @header-generator platform
    MCAPI bool getMolangValue(uint64 propertyNameHash, ::MolangScriptArg& out) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<bool> getBoolValue(ulong) const;
#else // @header-generator platform
    MCAPI ::std::optional<::std::variant<int, float, bool, ::std::string>>
    getValueVariant(uint64 propertyNameHash) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<ulong> getEnumIndexValue(ulong) const;
#else // @header-generator platform
    MCAPI void readLoadedProperties(::CompoundTag const& loadedPropertyTag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<float> getFloatValue(ulong) const;

    MCNAPI std::optional<int> getIntValue(ulong) const;

    MCNAPI bool getMolangValue(ulong, ::MolangScriptArg&) const;

    MCNAPI std::optional<std::variant<int, float, bool, std::string>> getValueVariant(ulong) const;

    MCNAPI void readLoadedProperties(::CompoundTag const&);

    MCNAPI void setAliasProperties(
        std::unordered_map<HashedString, std::shared_ptr<Tag>> const&,
        std::string const&,
        std::string const&
#else // @header-generator platform
    MCAPI void setAliasProperties(
        ::std::unordered_map<::HashedString, ::std::shared_ptr<::Tag>> const& aliasProperties,
        ::std::string const&                                                  aliasName,
        ::std::string const&                                                  canonicalName
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform

    MCNAPI void setBoolValue(ulong, bool);

    MCNAPI void setEnumIndexValue(ulong, ulong);

    MCNAPI void setFloatValue(ulong, float);

    MCNAPI void setIntValue(ulong, int);
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::gsl::not_null<std::shared_ptr<const PropertyGroup>>, ::RenderParams&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void*
    $ctor(::gsl::not_null<::std::shared_ptr<::PropertyGroup const>> propertyGroup, ::RenderParams& renderParams);
#endif
#endif // @header-generator platform
    // NOLINTEND
};
