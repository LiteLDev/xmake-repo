#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/buffer_span.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class PropertyBag {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>   mJsonValue;
    ::ll::TypedStorage<4, 4, int> mChangeVersion;
    // NOLINTEND

public:
    // prevent constructor by default
    PropertyBag& operator=(PropertyBag const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PropertyBag();

    MCNAPI explicit PropertyBag(::Json::Value const&);

    MCNAPI explicit PropertyBag(std::string const&);

    MCNAPI std::unique_ptr<PropertyBag> clone() const;

    MCNAPI void erase(std::string_view);

    MCNAPI int getChangeVersion() const;

    MCNAPI bool has(std::string_view) const;

    MCNAPI bool set(std::string_view, ::buffer_span<bool>);

    MCNAPI bool set(std::string_view, std::vector<bool> const&);

    MCNAPI bool set(std::string_view, ::buffer_span<int>);

    MCNAPI bool set(std::string_view, ::buffer_span<std::string>);

    MCNAPI bool set(std::string_view, std::vector<Json::Value> const&);

    MCNAPI std::string toString() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::PropertyBag& EMPTY();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::Json::Value const&);

    MCNAPI void* $ctor(std::string const&);
    // NOLINTEND
};
