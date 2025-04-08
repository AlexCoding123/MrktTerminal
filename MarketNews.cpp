#include <curl/curl.h>
#include <curl/easy.h>

int main(int argc, char* argv[])
//"https://feeds.content.dowjones.io/public/rss/RSSMarketsMain"
{
    CURL* curl = curl_easy_init();
    if(curl){
        CURLcode res;

        //Set the URL
        curl_easy_setopt(curl, CURLOPT_URL, "https://example.com");
        //All options
        curl_easy_setopt(curl, CURLOPT_HTTPGET, 1L );

        //Perform the ops
        curl_easy_perform(curl);

        //Cleanup the thread after ops are done
        curl_easy_cleanup(curl);
    }
    return 0;
}
