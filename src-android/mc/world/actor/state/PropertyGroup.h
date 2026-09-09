#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/molang/MolangVersion.h"
#include "mc/platform/brstd/flat_map.h"
#include "mc/world/actor/state/DefaultPropertyValues.h"
#include "mc/world/actor/state/PropertyMetadata.h"

// auto generated forward declare list
// clang-format off
class ExpressionNode;
class ListTag;
class RenderParams;
namespace Json { class Value; }
// clang-format on

class PropertyGroup : public ::std::enable_shared_from_this<PropertyGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<PropertyMetadata>>          mPropertyMetadata;
    ::ll::UntypedStorage<8, 48>                                       mPropertyIndexesByHash;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, ulong>> mPropertyIndexesByString;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<int, int>>>       mIntPropertyLimits;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<float, float>>>   mFloatPropertyLimits;
    ::ll::TypedStorage<8, 24, std::vector<std::vector<HashedString>>> mStringEnumValues;
    ::ll::TypedStorage<8, 96, ::DefaultPropertyValues>                mDefaultValues;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _addBoolProperty(std::string const&, bool, bool);

    MCNAPI void _addBoolProperty(std::string const&, bool, ::ExpressionNode&&);

    MCNAPI void _addEnumIndexProperty(std::string const&, bool, ulong, std::vector<HashedString> const&);

    MCNAPI void _addEnumIndexProperty(std::string const&, bool, ::ExpressionNode&&, std::vector<HashedString> const&);

    MCNAPI void _addFloatProperty(std::string const&, bool, float, float, float);

    MCNAPI void _addFloatProperty(std::string const&, bool, ::ExpressionNode&&, float, float);

    MCNAPI void _addIntProperty(std::string const&, bool, int, int, int);

    MCNAPI void _addIntProperty(std::string const&, bool, ::ExpressionNode&&, int, int);

    MCNAPI void _addPropertyMetadata(std::string const&, bool, ::PropertyMetadata::ContainedType);

    MCNAPI bool _loadPropertyFromJson(std::string const&, ::Json::Value const&, ::MolangVersion const, bool);

    MCNAPI void _reserveSpaceForTypes(std::vector<ulong> const&);

    MCNAPI bool getDefaultBoolValue(ulong, ::RenderParams&) const;

    MCNAPI ulong getDefaultEnumIndexValue(ulong, ::RenderParams&, std::string const&) const;

    MCNAPI float getDefaultFloatValue(ulong, ::RenderParams&) const;

    MCNAPI int getDefaultIntValue(ulong, ::RenderParams&) const;

    MCNAPI ::PropertyMetadata const* getPropertyMetadata(ulong const) const;

    MCNAPI bool hasAnyClientSyncProperties() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::PropertyMetadata::ContainedType _getJsonPropertyType(::Json::Value const&);

    MCNAPI static bool isValidEnumEntry(std::string const&);

    MCNAPI static std::shared_ptr<const PropertyGroup> loadPropertiesFromJson(::Json::Value const&, ::MolangVersion);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ulong const& MAX_ENUM_SIZE();

    MCNAPI static ulong const& MAX_ENUM_VALUE_SIZE();

    MCNAPI static ulong const& MAX_PROPERTIES_COUNT();
    // NOLINTEND
};
