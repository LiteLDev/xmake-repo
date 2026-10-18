#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/puv/InputFormat.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace Json { class Value; }
namespace Puv { class Logger; }
namespace cereal { class DynamicValue; }
// clang-format on

namespace Puv {

class Input {
public:
    // Input inner types declare
    // clang-format off
    struct Data;
    // clang-format on

    // Input inner types define
    struct Data {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<1, 1, ::Puv::InputFormat> mFormat;
        ::ll::TypedStorage<8, 8, void const*>        mPtr;
#else // @header-generator platform
        ::ll::UntypedStorage<1, 1> mUnk489f9a;
        ::ll::UntypedStorage<8, 8> mUnk9320ae;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        Data& operator=(Data const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        Data(Data const&);
#endif // @header-generator platform
        Data();
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI std::string_view toBinary() const;

        MCNAPI ::cereal::DynamicValue const& toDynamicValue() const;

        MCNAPI ::Json::Value const& toJsonCpp() const;

        MCNAPI std::string const& toJsonString() const;

        MCNAPI ::rapidjson::
            GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&
            toRapidjson() const;
        // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Input() = default;

    virtual ::SemVersion version() const = 0;

    virtual ::Puv::Input::Data data() const = 0;

    virtual ::Puv::Logger const& getErrors() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Puv::Logger const& $getErrors() const;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform


#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Puv
