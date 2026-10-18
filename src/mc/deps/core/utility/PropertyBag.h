#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/buffer_span.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on
#else // @header-generator platform
#include "mc/deps/json/Value.h"
#endif // @header-generator platform

class PropertyBag {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 16>   mJsonValue;
    ::ll::TypedStorage<4, 4, int> mChangeVersion;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Json::Value> mJsonValue;
    ::ll::TypedStorage<4, 4, int>            mChangeVersion;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    PropertyBag& operator=(PropertyBag const&);

#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    PropertyBag();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI explicit PropertyBag(::std::string const& serializedJson);

    MCAPI bool has(::std::string_view key) const;
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::PropertyBag& EMPTY();
#else // @header-generator platform
    MCAPI static ::PropertyBag& EMPTY();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::Json::Value const&);

    MCNAPI void* $ctor(std::string const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::std::string const& serializedJson);
#endif
#endif // @header-generator platform
    // NOLINTEND
};
