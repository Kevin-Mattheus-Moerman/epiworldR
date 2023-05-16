build: clean docs
	R CMD build .

debug: clean
	EPI_CONFIG="-DEPI_DEBUG -Wall -pedantic -g" R CMD INSTALL .

install: build
	EPI_CONFIG="-Wall -pedantic -g" R CMD INSTALL epiworldR_*tar.gz

README.md: README.Rmd
	Rscript --vanilla -e 'rmarkdown::render("README.Rmd")'

update:
	wget https://raw.githubusercontent.com/UofUEpi/epiworld/master/epiworld.hpp && \
		mv epiworld.hpp inst/include/epiworld.hpp 
local-update:
	rsync -avz ../epiworld/epiworld.hpp inst/include/epiworld.hpp

check: build
	R CMD check epiworldR_*.tar.gz

clean: 
	Rscript --vanilla -e 'devtools::clean_dll()'

docs:
	Rscript --vanilla -e 'roxygen2::roxygenize()'

.PHONY: build update check clean docs

checkv: build
	R CMD check --as-cran --use-valgrind epiworldR*.tar.gz
	
