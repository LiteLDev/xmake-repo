#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/ResourcePackResponse.h"

struct ResourcePackClientResponsePacketPayload {
public:
    // ResourcePackClientResponsePacketPayload inner types declare
    // clang-format off
    struct Cancel;
    struct Downloading;
    struct DownloadingFinished;
    struct ResourcePackStackFinished;
    // clang-format on

    // ResourcePackClientResponsePacketPayload inner types define
    struct Cancel {};

    struct Downloading {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::set<std::string>> mDownloadingPacks;
#else // @header-generator platform
        ::ll::TypedStorage<8, 16, ::std::set<::std::string>> mDownloadingPacks;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI bool operator==(::ResourcePackClientResponsePacketPayload::Downloading const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
        MCAPI ~Downloading();
#endif
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCFOLD void $dtor();
#endif
#endif // @header-generator platform
        // NOLINTEND
    };

    struct DownloadingFinished {};

    struct ResourcePackStackFinished {};

#if defined(LL_PLAT_A) // @header-generator platform
    using Response = std::variant<
        ResourcePackClientResponsePacketPayload::Cancel,
        ResourcePackClientResponsePacketPayload::Downloading,
        ResourcePackClientResponsePacketPayload::DownloadingFinished,
        ResourcePackClientResponsePacketPayload::ResourcePackStackFinished>;
#else // @header-generator platform
    using Response = ::std::variant<
        ::ResourcePackClientResponsePacketPayload::Cancel,
        ::ResourcePackClientResponsePacketPayload::Downloading,
        ::ResourcePackClientResponsePacketPayload::DownloadingFinished,
        ::ResourcePackClientResponsePacketPayload::ResourcePackStackFinished>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 32, std::variant<ResourcePackClientResponsePacketPayload::Cancel, ResourcePackClientResponsePacketPayload::Downloading, ResourcePackClientResponsePacketPayload::DownloadingFinished, ResourcePackClientResponsePacketPayload::ResourcePackStackFinished>> mResponse;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        24,
        ::std::variant<
            ::ResourcePackClientResponsePacketPayload::Cancel,
            ::ResourcePackClientResponsePacketPayload::Downloading,
            ::ResourcePackClientResponsePacketPayload::DownloadingFinished,
            ::ResourcePackClientResponsePacketPayload::ResourcePackStackFinished>>
        mResponse;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ResourcePackClientResponsePacketPayload();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ResourcePackClientResponsePacketPayload(::ResourcePackResponse, std::set<std::string>);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI explicit ResourcePackClientResponsePacketPayload(::ResourcePackResponse response);

    MCAPI ResourcePackClientResponsePacketPayload(
        ::ResourcePackResponse    response,
        ::std::set<::std::string> downloadingPacks
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::set<std::string> const& getDownloadingPacks() const;
#else // @header-generator platform
    MCAPI ::std::set<::std::string> const& getDownloadingPacks() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isResponse(::ResourcePackResponse) const;
#else // @header-generator platform
    MCAPI ~ResourcePackClientResponsePacketPayload();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ResourcePackResponse, std::set<std::string>);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::ResourcePackResponse response);

    MCAPI void* $ctor(::ResourcePackResponse response, ::std::set<::std::string> downloadingPacks);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
