#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/JSONCppSchemaReaderBase.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace cereal {

class JSONCppSchemaReader : public ::cereal::JSONCppSchemaReaderBase {
public:
    // prevent constructor by default
    JSONCppSchemaReader();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~JSONCppSchemaReader();

    virtual bool _allowAsBool();

    virtual bool _allowAsInt8();

    virtual bool _allowAsUInt8();

    virtual bool _allowAsInt16();

    virtual bool _allowAsUInt16();

    virtual bool _allowAsInt32();

    virtual bool _allowAsUInt32();

    virtual bool _allowAsInt64();

    virtual bool _allowAsUInt64();

    virtual bool _allowAsFloat();

    virtual bool _allowAsDouble();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit JSONCppSchemaReader(std::reference_wrapper<const Json::Value>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::reference_wrapper<const Json::Value>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $_allowAsBool();

    MCNAPI bool $_allowAsInt8();

    MCNAPI bool $_allowAsUInt8();

    MCNAPI bool $_allowAsInt16();

    MCNAPI bool $_allowAsUInt16();

    MCNAPI bool $_allowAsInt32();

    MCNAPI bool $_allowAsUInt32();

    MCNAPI bool $_allowAsInt64();

    MCNAPI bool $_allowAsUInt64();

    MCNAPI bool $_allowAsFloat();

    MCNAPI bool $_allowAsDouble();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
