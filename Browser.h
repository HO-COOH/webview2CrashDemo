#pragma once

#include "Browser.g.h"

namespace winrt::webview2Test::implementation
{
    struct Browser : BrowserT<Browser>
    {
        Browser();
    };
}

namespace winrt::webview2Test::factory_implementation
{
    struct Browser : BrowserT<Browser, implementation::Browser>
    {
    };
}
