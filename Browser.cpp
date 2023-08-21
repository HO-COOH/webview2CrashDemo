#include "pch.h"
#include "Browser.h"
#if __has_include("Browser.g.cpp")
#include "Browser.g.cpp"
#endif
#include <winrt/Microsoft.Web.WebView2.Core.h>

namespace winrt::webview2Test::implementation
{
    Browser::Browser()
    {
        Loaded(
            [this](auto...)->winrt::Windows::Foundation::IAsyncAction
            {
                auto thisCopy = this;

                co_await thisCopy->EnsureCoreWebView2Async();
                thisCopy->CoreWebView2().OpenDevToolsWindow();
            }
        );
    }
}
