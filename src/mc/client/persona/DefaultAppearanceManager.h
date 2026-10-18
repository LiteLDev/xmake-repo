#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/persona/DefaultAppearance.h"

// auto generated forward declare list
// clang-format off
class IPersonaRepository;
class PersonaAppearance;
namespace Core { class PathView; }
namespace Json { class Value; }
namespace mce { class UUID; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace persona {

#if defined(LL_PLAT_A) // @header-generator platform
class DefaultAppearanceManager {
public:
    // DefaultAppearanceManager inner types define
    using AppearanceList = std::vector<persona::DefaultAppearance>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<persona::DefaultAppearance>> mDefaultAppearances;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                mDefaultDefinitionPaths;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI const persona::DefaultAppearance* begin() const;

    MCNAPI const persona::DefaultAppearance* end() const;

    MCNAPI ::persona::DefaultAppearance const* findPersonaInDefaultAppearances(::PersonaAppearance const&) const;

    MCNAPI uint getAmountOfDefaultAppearances() const;

    MCNAPI ::persona::DefaultAppearance const& getDefaultAppearance(uint const&) const;

    MCNAPI ::persona::DefaultAppearance const& getSeededDefaultAppearance(uint) const;

    MCNAPI bool isValidIndex(uint const&) const;

    MCNAPI ~DefaultAppearanceManager();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static uint getCurrentVersion();

    MCNAPI static bool isOlderVersion(uint const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class DefaultAppearanceManager {};
#endif // @header-generator platform

} // namespace persona
