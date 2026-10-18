#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/Singleton.h"
#include "mc/deps/renderer/ConstantBufferMetaData.h"

// auto generated forward declare list
// clang-format off
namespace mce { class GlobalConstantBufferManager; }
namespace mce { class UniformMetaData; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
class ConstantBufferMetaDataManager : public ::mce::Singleton<mce::ConstantBufferMetaDataManager> {
public:
    // ConstantBufferMetaDataManager inner types define
    using constantBufferMetaDataList_t = std::vector<mce::ConstantBufferMetaData>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<mce::ConstantBufferMetaData>> constantBufferMetaDataList;
    ::ll::TypedStorage<8, 24, std::set<std::string>>                    definedUniformNames;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ConstantBufferMetaDataManager();

    MCNAPI void loadJsonFile(::mce::GlobalConstantBufferManager&, std::string const&);

    MCNAPI ~ConstantBufferMetaDataManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class ConstantBufferMetaDataManager {};
#endif // @header-generator platform

} // namespace mce
