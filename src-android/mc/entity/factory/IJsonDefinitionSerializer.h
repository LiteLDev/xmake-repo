#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IDefinitionInstance;
class MinEngineVersion;
class SemVersion;
namespace Json { class Value; }
// clang-format on

class IJsonDefinitionSerializer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mName;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IJsonDefinitionSerializer();

    virtual std::shared_ptr<IDefinitionInstance> serializeDefinitionInstance(::Json::Value const&, ::MinEngineVersion const&, ::SemVersion const&, bool const) = 0;

    virtual std::shared_ptr<IDefinitionInstance> serializeDefinitionInstance(::Json::Value const&, ::MinEngineVersion const&) = 0;

    virtual std::shared_ptr<IDefinitionInstance> _serializeDefinitionInstance(::Json::Value const&, ::MinEngineVersion const&, bool, bool const) const = 0;
    // clang-format on
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
