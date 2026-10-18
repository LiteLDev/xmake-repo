#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/ExternalServerFileError.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
struct ExternalServer;
// clang-format on

class IExternalServerFile : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IExternalServerFile() = default;

    virtual void load() = 0;

    virtual void save() = 0;

    virtual std::unordered_map<int, std::unique_ptr<ExternalServer>> const& getExternalServers() = 0;

    virtual ::nonstd::expected<int, ExternalServerFileError> addServer(std::string const&, std::string const&, int) = 0;

    virtual std::optional<ExternalServerFileError> editServer(int, std::string const&, std::string const&, int, bool) = 0;

    virtual bool findAndEditServer(std::string const&, std::string const&, int, bool) = 0;

    virtual void removeServer(int) = 0;

    virtual void updateTimeStamp(int) = 0;

    virtual std::tuple<std::string, std::string, int> getServerInfo(int) = 0;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
class IExternalServerFile {};
#endif // @header-generator platform
