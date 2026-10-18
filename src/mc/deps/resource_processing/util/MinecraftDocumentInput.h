#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/sem_ver/SemVersion.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/puv/Input.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/puv/Logger.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace Bedrock::Resources { struct BinaryHeader; }
#else // @header-generator platform
class SemVersion;
namespace Puv { class Logger; }
#endif // @header-generator platform
// clang-format on

namespace Bedrock::Resources {

class MinecraftDocumentInput : public ::Puv::Input {
public:
    // MinecraftDocumentInput inner types declare
    // clang-format off
    struct Binary;
    struct NoPayloadCheck;
    // clang-format on

    // MinecraftDocumentInput inner types define
    struct Binary {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string>      mData;
        ::ll::TypedStorage<8, 16, std::string_view> mPayload;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 32> mUnk8c2432;
        ::ll::UntypedStorage<8, 16> mUnk863df5;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        Binary& operator=(Binary const&);
        Binary(Binary const&);
        Binary();
#endif // @header-generator platform
    };

    struct NoPayloadCheck {};

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::UntypedStorage<8, 24> mMinModernVersion;
    ::ll::UntypedStorage<8, 24> mFormatVersion;
    ::ll::TypedStorage<8, 24, std::string> mPayloadMemberName;
    ::ll::TypedStorage<8, 112, std::variant<std::string, rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>, Bedrock::Resources::MinecraftDocumentInput::Binary>> mStorage;
    ::ll::TypedStorage<8, 80, ::Puv::Logger> mErrors;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24>  mUnkbde5d3;
    ::ll::UntypedStorage<8, 24>  mUnkfdcb9e;
    ::ll::UntypedStorage<8, 32>  mUnkf632a0;
    ::ll::UntypedStorage<8, 104> mUnk556446;
    ::ll::UntypedStorage<8, 80>  mUnk5f5319;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    MinecraftDocumentInput& operator=(MinecraftDocumentInput const&);
    MinecraftDocumentInput(MinecraftDocumentInput const&);
#endif // @header-generator platform
    MinecraftDocumentInput();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~MinecraftDocumentInput();
#else // @header-generator platform
    virtual ::SemVersion version() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::SemVersion version() const;
#else // @header-generator platform
    virtual ::Puv::Input::Data data() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Puv::Input::Data data() const;
#else // @header-generator platform
    virtual ::Puv::Logger const& getErrors() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Puv::Logger const& getErrors() const;
#else // @header-generator platform
    virtual ~MinecraftDocumentInput() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI MinecraftDocumentInput(std::string_view, ::SemVersion const&, std::string);

#else // @header-generator platform
#endif // @header-generator platform
    MCNAPI MinecraftDocumentInput(
        ::Bedrock::Resources::MinecraftDocumentInput::NoPayloadCheck,
#if defined(LL_PLAT_A) // @header-generator platform
        ::SemVersion const&,
        std::string
#else // @header-generator platform
        ::SemVersion const& minModernVersion,
        ::std::string       data
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    MCNAPI
    MinecraftDocumentInput(::std::string_view payloadKey, ::SemVersion const& minModernVersion, ::std::string data);

#endif // @header-generator platform
    MCNAPI MinecraftDocumentInput(
#if defined(LL_PLAT_A) // @header-generator platform
        std::string_view const,
        ::SemVersion,
        ::SemVersion,
#else // @header-generator platform
        ::std::string_view payloadKey,
        ::SemVersion       minModernVersion,
        ::SemVersion       formatVersion,
#endif // @header-generator platform
        ::rapidjson::GenericDocument<
#if defined(LL_PLAT_A) // @header-generator platform
            rapidjson::UTF8<char>,
            rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
            rapidjson::CrtAllocator>
#else // @header-generator platform
            ::rapidjson::UTF8<char>,
            ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
            ::rapidjson::CrtAllocator> payload
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void checkPayloadKey(std::string_view);
#else // @header-generator platform
    MCNAPI void checkPayloadKey(::std::string_view payloadKey);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void init(std::string_view, ::SemVersion const&, std::string);

    MCNAPI std::string const& payloadMemberName() const;
#else // @header-generator platform
    MCNAPI void init(::std::string_view payloadKey, ::SemVersion const& minModernVersion, ::std::string data);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string_view, ::SemVersion const&, std::string);
#else // @header-generator platform
    MCNAPI void* $ctor(
        ::Bedrock::Resources::MinecraftDocumentInput::NoPayloadCheck,
        ::SemVersion const& minModernVersion,
        ::std::string       data
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Bedrock::Resources::MinecraftDocumentInput::NoPayloadCheck, ::SemVersion const&, std::string);
#else // @header-generator platform
    MCNAPI void* $ctor(::std::string_view payloadKey, ::SemVersion const& minModernVersion, ::std::string data);
#endif // @header-generator platform

    MCNAPI void* $ctor(
#if defined(LL_PLAT_A) // @header-generator platform
        std::string_view const,
        ::SemVersion,
        ::SemVersion,
#else // @header-generator platform
        ::std::string_view payloadKey,
        ::SemVersion       minModernVersion,
        ::SemVersion       formatVersion,
#endif // @header-generator platform
        ::rapidjson::GenericDocument<
#if defined(LL_PLAT_A) // @header-generator platform
            rapidjson::UTF8<char>,
            rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
            rapidjson::CrtAllocator>
#else // @header-generator platform
            ::rapidjson::UTF8<char>,
            ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
            ::rapidjson::CrtAllocator> payload
#endif // @header-generator platform
    );
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

    MCNAPI ::Puv::Logger const& $getErrors() const;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Resources
