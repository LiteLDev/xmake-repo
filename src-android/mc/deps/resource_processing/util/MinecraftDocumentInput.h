#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/deps/puv/Input.h"
#include "mc/deps/puv/Logger.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Resources { struct BinaryHeader; }
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
        ::ll::TypedStorage<8, 24, std::string>      mData;
        ::ll::TypedStorage<8, 16, std::string_view> mPayload;
        // NOLINTEND
    };

    struct NoPayloadCheck {};

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 24> mMinModernVersion;
    ::ll::UntypedStorage<8, 24> mFormatVersion;
    ::ll::TypedStorage<8, 24, std::string> mPayloadMemberName;
    ::ll::TypedStorage<8, 112, std::variant<std::string, rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>, Bedrock::Resources::MinecraftDocumentInput::Binary>> mStorage;
    ::ll::TypedStorage<8, 80, ::Puv::Logger> mErrors;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftDocumentInput();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftDocumentInput();

    virtual ::SemVersion version() const;

    virtual ::Puv::Input::Data data() const;

    virtual ::Puv::Logger const& getErrors() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MinecraftDocumentInput(std::string_view, ::SemVersion const&, std::string);

    MCNAPI MinecraftDocumentInput(
        ::Bedrock::Resources::MinecraftDocumentInput::NoPayloadCheck,
        ::SemVersion const&,
        std::string
    );

    MCNAPI MinecraftDocumentInput(
        std::string_view const,
        ::SemVersion,
        ::SemVersion,
        ::rapidjson::GenericDocument<
            rapidjson::UTF8<char>,
            rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
            rapidjson::CrtAllocator>
    );

    MCNAPI void checkPayloadKey(std::string_view);

    MCNAPI void init(std::string_view, ::SemVersion const&, std::string);

    MCNAPI std::string const& payloadMemberName() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string_view, ::SemVersion const&, std::string);

    MCNAPI void* $ctor(::Bedrock::Resources::MinecraftDocumentInput::NoPayloadCheck, ::SemVersion const&, std::string);

    MCNAPI void* $ctor(
        std::string_view const,
        ::SemVersion,
        ::SemVersion,
        ::rapidjson::GenericDocument<
            rapidjson::UTF8<char>,
            rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
            rapidjson::CrtAllocator>
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Resources
