#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/deps/puv/Input.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Puv {

class JsonCppInput : public ::Puv::Input {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mData;
    ::ll::UntypedStorage<8, 24> mVersion;
    // NOLINTEND

public:
    // prevent constructor by default
    JsonCppInput();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~JsonCppInput();

    virtual ::SemVersion version() const;

    virtual ::Puv::Input::Data data() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit JsonCppInput(::Json::Value);

    MCNAPI JsonCppInput(::Json::Value, ::SemVersion);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Json::Value);

    MCNAPI void* $ctor(::Json::Value, ::SemVersion);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::SemVersion $version() const;

    MCNAPI ::Puv::Input::Data $data() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Puv
