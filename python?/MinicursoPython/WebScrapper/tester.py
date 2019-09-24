import scrapper

scp = scrapper.Scrapper('http://www.rottentomatoes.com')

print(scp.parse_html().a)