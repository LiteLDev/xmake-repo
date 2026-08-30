#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/resources/IContentCatalogPackSourceFactory.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/resources/PackSourceFactory.h"

// auto generated forward declare list
// clang-format off
class IInPackagePacks;
class IPackIOProvider;
namespace PackCommand { class IPackCommandPipeline; }
// clang-format on

class ClientPackSourceFactory : public ::PackSourceFactory, public ::IContentCatalogPackSourceFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientPackSourceFactory() = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::unique_ptr<ClientPackSourceFactory> create(
        ::gsl::not_null<const std::shared_ptr<IInPackagePacks>>,
        std::unique_ptr<IPackIOProvider>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<::PackCommand::IPackCommandPipeline>>
    );
    // NOLINTEND
};
