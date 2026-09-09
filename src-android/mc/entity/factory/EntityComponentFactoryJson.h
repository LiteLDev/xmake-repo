#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/entity/factory/EntityComponentFactoryBase.h"

// auto generated forward declare list
// clang-format off
class DefinitionInstanceGroup;
class IJsonDefinitionSerializer;
class MinEngineVersion;
namespace Json { class Value; }
// clang-format on

class EntityComponentFactoryJson : public ::EntityComponentFactoryBase {
public:
    // EntityComponentFactoryJson inner types define
    using iterator = std::__hash_map_iterator<std::__hash_iterator<
        std::__hash_node<std::__hash_value_type<HashedString, std::unique_ptr<IJsonDefinitionSerializer>>, void*>*>>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, std::unique_ptr<IJsonDefinitionSerializer>>> mDefinitionSerializers;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EntityComponentFactoryJson();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::IJsonDefinitionSerializer* tryGetDefinitionSerializer(std::string const&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
