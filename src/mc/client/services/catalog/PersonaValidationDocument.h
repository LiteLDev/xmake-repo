#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/catalog/DurableDocument.h"

// auto generated forward declare list
// clang-format off
class CatalogBackend;
class CustomDocumentModifier;
struct HardwareCompatibilityContext;
namespace Json { class Value; }
// clang-format on

struct PersonaValidationDocument : public ::DurableDocument {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mIsPlatformLocked;
    ::ll::TypedStorage<1, 1, bool> mCanWearItem;
    // NOLINTEND

public:
    // prevent constructor by default
    PersonaValidationDocument& operator=(PersonaValidationDocument const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PersonaValidationDocument(
        ::Json::Value const&,
        ::CatalogBackend const&,
        std::string const&,
        ::CustomDocumentModifier*,
        std::string,
        ::HardwareCompatibilityContext const&
    );

    MCNAPI void fromJson(
        ::Json::Value const&,
        bool,
        std::string const&,
        ::CustomDocumentModifier*,
        ::HardwareCompatibilityContext const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Json::Value const&,
        ::CatalogBackend const&,
        std::string const&,
        ::CustomDocumentModifier*,
        std::string,
        ::HardwareCompatibilityContext const&
    );
    // NOLINTEND
};
#else // @header-generator platform
struct PersonaValidationDocument {};
#endif // @header-generator platform
