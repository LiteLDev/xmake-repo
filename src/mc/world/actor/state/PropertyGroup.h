#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/string/HashedString.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/molang/MolangVersion.h"
#include "mc/platform/brstd/flat_map.h"
#include "mc/world/actor/state/DefaultPropertyValues.h"
#include "mc/world/actor/state/PropertyMetadata.h"

// auto generated forward declare list
// clang-format off
class ExpressionNode;
#if defined(LL_PLAT_A) // @header-generator platform
class ListTag;
#else // @header-generator platform
class HashedString;
class PropertyMetadata;
#endif // @header-generator platform
class RenderParams;
namespace Json { class Value; }
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class PropertyGroup : public ::std::enable_shared_from_this<PropertyGroup> {
#else // @header-generator platform
class PropertyGroup : public ::std::enable_shared_from_this<::PropertyGroup> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<PropertyMetadata>>          mPropertyMetadata;
    ::ll::UntypedStorage<8, 48>                                       mPropertyIndexesByHash;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, ulong>> mPropertyIndexesByString;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<int, int>>>       mIntPropertyLimits;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<float, float>>>   mFloatPropertyLimits;
    ::ll::TypedStorage<8, 24, std::vector<std::vector<HashedString>>> mStringEnumValues;
    ::ll::TypedStorage<8, 96, ::DefaultPropertyValues>                mDefaultValues;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::PropertyMetadata>> mPropertyMetadata;
    ::ll::TypedStorage<
        8,
        48,
        ::brstd::flat_map<uint64, uint64, ::std::less<uint64>, ::std::vector<uint64>, ::std::vector<int64>>>
                                                                            mPropertyIndexesByHash;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, uint64>>  mPropertyIndexesByString;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<int, int>>>         mIntPropertyLimits;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<float, float>>>     mFloatPropertyLimits;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::vector<::HashedString>>> mStringEnumValues;
    ::ll::TypedStorage<8, 96, ::DefaultPropertyValues>                      mDefaultValues;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _addBoolProperty(std::string const&, bool, bool);
#else // @header-generator platform
    MCAPI void _addBoolProperty(::std::string const& name, bool clientSync, ::ExpressionNode&& defaultExpression);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _addBoolProperty(std::string const&, bool, ::ExpressionNode&&);
#else // @header-generator platform
    MCAPI void _addBoolProperty(::std::string const& name, bool clientSync, bool defaultValue);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _addEnumIndexProperty(std::string const&, bool, ulong, std::vector<HashedString> const&);
#else // @header-generator platform
    MCAPI void _addEnumIndexProperty(
        ::std::string const&                 name,
        bool                                 clientSync,
        ::ExpressionNode&&                   defaultExpression,
        ::std::vector<::HashedString> const& enumValues
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _addEnumIndexProperty(std::string const&, bool, ::ExpressionNode&&, std::vector<HashedString> const&);
#else // @header-generator platform
    MCAPI void _addEnumIndexProperty(
        ::std::string const&                 name,
        bool                                 clientSync,
        uint64                               defaultValue,
        ::std::vector<::HashedString> const& enumValues
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _addFloatProperty(std::string const&, bool, float, float, float);
#else // @header-generator platform
    MCAPI void _addFloatProperty(
        ::std::string const& name,
        bool                 clientSync,
        ::ExpressionNode&&   defaultExpression,
        float                rangeMin,
        float                rangeMax
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _addFloatProperty(std::string const&, bool, ::ExpressionNode&&, float, float);
#else // @header-generator platform
    MCAPI void
    _addFloatProperty(::std::string const& name, bool clientSync, float defaultValue, float rangeMin, float rangeMax);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _addIntProperty(std::string const&, bool, int, int, int);
#else // @header-generator platform
    MCAPI void _addIntProperty(
        ::std::string const& name,
        bool                 clientSync,
        ::ExpressionNode&&   defaultExpression,
        int                  rangeMin,
        int                  rangeMax
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _addIntProperty(std::string const&, bool, ::ExpressionNode&&, int, int);
#else // @header-generator platform
    MCAPI void
    _addIntProperty(::std::string const& name, bool clientSync, int defaultValue, int rangeMin, int rangeMax);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _addPropertyMetadata(std::string const&, bool, ::PropertyMetadata::ContainedType);
#else // @header-generator platform
    MCAPI void
    _addPropertyMetadata(::std::string const& name, bool clientSync, ::PropertyMetadata::ContainedType propertyType);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _loadPropertyFromJson(std::string const&, ::Json::Value const&, ::MolangVersion const, bool);
#else // @header-generator platform
    MCAPI bool _loadPropertyFromJson(
        ::std::string const&  name,
        ::Json::Value const&  propertyNode,
        ::MolangVersion const molangVersion,
        bool                  clientSync
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _reserveSpaceForTypes(std::vector<ulong> const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void _reserveSpaceForTypes(::std::vector<uint64> const& typeCounts);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getDefaultBoolValue(ulong, ::RenderParams&) const;
#else // @header-generator platform
    MCAPI bool getDefaultBoolValue(uint64 boolArrayIndex, ::RenderParams& renderParams) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong getDefaultEnumIndexValue(ulong, ::RenderParams&, std::string const&) const;
#else // @header-generator platform
    MCAPI uint64 getDefaultEnumIndexValue(
        uint64               enumIndexArrayIndex,
        ::RenderParams&      renderParams,
        ::std::string const& propertyName
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getDefaultFloatValue(ulong, ::RenderParams&) const;
#else // @header-generator platform
    MCAPI float getDefaultFloatValue(uint64 floatArrayIndex, ::RenderParams& renderParams) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getDefaultIntValue(ulong, ::RenderParams&) const;
#else // @header-generator platform
    MCAPI int getDefaultIntValue(uint64 intArrayIndex, ::RenderParams& renderParams) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PropertyMetadata const* getPropertyMetadata(ulong const) const;
#else // @header-generator platform
    MCAPI ::PropertyMetadata const* getPropertyMetadata(uint64 propertyNameHash) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool hasAnyClientSyncProperties() const;
#else // @header-generator platform
    MCAPI ::PropertyMetadata const* getPropertyMetadataByString(::std::string const& propertyName) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::PropertyMetadata::ContainedType _getJsonPropertyType(::Json::Value const&);
#else // @header-generator platform
    MCAPI static ::PropertyMetadata::ContainedType _getJsonPropertyType(::Json::Value const& typeNode);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool isValidEnumEntry(std::string const&);

    MCNAPI static std::shared_ptr<const PropertyGroup> loadPropertiesFromJson(::Json::Value const&, ::MolangVersion);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ulong const& MAX_ENUM_SIZE();

    MCNAPI static ulong const& MAX_ENUM_VALUE_SIZE();

    MCNAPI static ulong const& MAX_PROPERTIES_COUNT();
#else // @header-generator platform
    MCAPI static ::std::shared_ptr<::PropertyGroup const>
    loadPropertiesFromJson(::Json::Value const& root, ::MolangVersion molangVersion);
#endif // @header-generator platform
    // NOLINTEND
};
