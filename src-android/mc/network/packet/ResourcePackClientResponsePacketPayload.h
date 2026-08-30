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
        ::ll::TypedStorage<8, 24, std::set<std::string>> mDownloadingPacks;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool operator==(::ResourcePackClientResponsePacketPayload::Downloading const&) const;
        // NOLINTEND
    };

    struct DownloadingFinished {};

    struct ResourcePackStackFinished {};

    using Response = std::variant<
        ResourcePackClientResponsePacketPayload::Cancel,
        ResourcePackClientResponsePacketPayload::Downloading,
        ResourcePackClientResponsePacketPayload::DownloadingFinished,
        ResourcePackClientResponsePacketPayload::ResourcePackStackFinished>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 32, std::variant<ResourcePackClientResponsePacketPayload::Cancel, ResourcePackClientResponsePacketPayload::Downloading, ResourcePackClientResponsePacketPayload::DownloadingFinished, ResourcePackClientResponsePacketPayload::ResourcePackStackFinished>> mResponse;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ResourcePackClientResponsePacketPayload(::ResourcePackResponse, std::set<std::string>);

    MCNAPI std::set<std::string> const& getDownloadingPacks() const;

    MCNAPI bool isResponse(::ResourcePackResponse) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ResourcePackResponse, std::set<std::string>);
    // NOLINTEND
};
